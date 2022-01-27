

#include "R_NP_UtilsBPLibrary.h"
#include "R_NP_Utils.h"

UR_NP_UtilsBPLibrary::UR_NP_UtilsBPLibrary(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
}

float UR_NP_UtilsBPLibrary::R_NP_UtilsSampleFunction(float Param)
{
    return -1;
}

UNpUtilsObject *UR_NP_UtilsBPLibrary::CreateUClassOject()
{

    UNpUtilsObject *NpUtilsObject = NewObject<UNpUtilsObject>();
    return NpUtilsObject;
}

bool UR_NP_UtilsBPLibrary::addData(UNpUtilsObject *NpUtilsObject, TArray<uint8> TArr)
{

    std::vector<char> data;

    for (int i = 0; i < TArr.Num(); i++)
    {
        data.push_back(static_cast<char>(TArr[i]));
    }

    return NpUtilsObject->addData(data);
}

bool UR_NP_UtilsBPLibrary::testaddData(UNpUtilsObject *NpUtilsObject)
{

    return NpUtilsObject->testaddData();
}

TMap<int32, float> UR_NP_UtilsBPLibrary::lastFilteredData(UNpUtilsObject *NpUtilsObject)
{

    TMap<int32, float> DataMap;

    std::vector<std::vector<float>> UEFilteredData = NpUtilsObject->lastFilteredData();

    for (int j = 0; j < UEFilteredData.size(); j++)
    {
        for (int i = 0; i < UEFilteredData[j].size(); i++)
        {
            DataMap.Add(j, UEFilteredData[j][i]);
        }
    }

    return DataMap;
}

TMap<int32, float> UR_NP_UtilsBPLibrary::lastRhythms(UNpUtilsObject *NpUtilsObject)
{

    TMap<int32, float> DataMap;

    std::vector<std::vector<float>> UEFilteredData = NpUtilsObject->lastRhythms();

    for (int j = 0; j < UEFilteredData.size(); j++)
    {
        for (int i = 0; i < UEFilteredData[j].size(); i++)
        {
            DataMap.Add(j, UEFilteredData[j][i]);
        }
    }

    return DataMap;
}

TMap<int32, float> UR_NP_UtilsBPLibrary::lastSpectrums(UNpUtilsObject *NpUtilsObject)
{

    TMap<int32, float> DataMap;

    std::vector<std::vector<float>> UEFilteredData = NpUtilsObject->lastSpectrums();

    for (int j = 0; j < UEFilteredData.size(); j++)
    {
        for (int i = 0; i < UEFilteredData[j].size(); i++)
        {
            DataMap.Add(j, UEFilteredData[j][i]);
        }
    }

    return DataMap;
}

TArray<float> UR_NP_UtilsBPLibrary::GetFilteredData(UNpUtilsObject *NpUtilsObject, TArray<float> &Key, TArray<float> &Val)
{

    std::vector<std::vector<float>> UEFilteredData = NpUtilsObject->lastFilteredData();

    TArray<float> Arr;

    for (int j = 0; j < UEFilteredData.size(); j++)
    {
        for (int i = 0; i < UEFilteredData[j].size(); i++)
        {

            Arr.Add(j);
            Arr.Add(UEFilteredData[j][i]);

            Key.Add(j);
            Val.Add(UEFilteredData[j][i]);
        }
    }

    return Arr;
}

TArray<float> UR_NP_UtilsBPLibrary::GetRhythms(UNpUtilsObject *NpUtilsObject, TArray<float> &Key, TArray<float> &Val)
{

    std::vector<std::vector<float>> UEFilteredData = NpUtilsObject->lastRhythms();

    TArray<float> Arr;

    for (int j = 0; j < UEFilteredData.size(); j++)
    {
        for (int i = 0; i < UEFilteredData[j].size(); i++)
        {

            Arr.Add(j);
            Arr.Add(UEFilteredData[j][i]);

            Key.Add(j);
            Val.Add(UEFilteredData[j][i]);
        }
    }

    return Arr;
}

TArray<float> UR_NP_UtilsBPLibrary::GetSpectrums(UNpUtilsObject *NpUtilsObject, TArray<float> &Key, TArray<float> &Val)
{

    std::vector<std::vector<float>> UEFilteredData;

    TArray<float> Arr;

    if (NpUtilsObject->lastSpectrums().size() > 0)
    {

        UEFilteredData = NpUtilsObject->lastSpectrums();

        for (int j = 0; j < UEFilteredData.size(); j++)
        {
            for (int i = 0; i < UEFilteredData[j].size(); i++)
            {

                Arr.Add(j);
                Arr.Add(UEFilteredData[j][i]);

                Key.Add(j);
                Val.Add(UEFilteredData[j][i]);
            }
        }

        return Arr;
    }

    return Arr;
}

bool UR_NP_UtilsBPLibrary::BLSignalConverter(TArray<uint8> TArr, TArray<float> &outdata, TMap<int32, float> &expDataMap)
{

    return 1;
}
