//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailSkuContractCity, AliDetailSkuContractComponentDataModel, AliDetailSkuContractNetStandard, AliDetailSkuContractPlan, AliDetailSkuContractVersion, NSArray, NSDictionary, NSString;

@interface AliDetailSkuContractInfo : TBJSONModel
{
    _Bool _isCompleted;
    NSArray *_componentData;
    AliDetailSkuContractComponentDataModel *_componentDataModel;
    AliDetailSkuContractVersion *_version;
    NSString *_itemId;
    NSString *_skuId;
    NSString *_tipStr;
    AliDetailSkuContractPlan *_selectedPlan;
    AliDetailSkuContractCity *_selectedCity;
    AliDetailSkuContractNetStandard *_selectedNetStandard;
    NSString *_phoneNo;
}

@property(copy, nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(retain, nonatomic) AliDetailSkuContractNetStandard *selectedNetStandard; // @synthesize selectedNetStandard=_selectedNetStandard;
@property(retain, nonatomic) AliDetailSkuContractCity *selectedCity; // @synthesize selectedCity=_selectedCity;
@property(retain, nonatomic) AliDetailSkuContractPlan *selectedPlan; // @synthesize selectedPlan=_selectedPlan;
@property(copy, nonatomic) NSString *tipStr; // @synthesize tipStr=_tipStr;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) AliDetailSkuContractVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) AliDetailSkuContractComponentDataModel *componentDataModel; // @synthesize componentDataModel=_componentDataModel;
@property(copy, nonatomic) NSArray *componentData; // @synthesize componentData=_componentData;
- (void).cxx_destruct;
- (id)titleOfType:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *submitParams;

@end
