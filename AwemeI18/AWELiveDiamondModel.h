//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWELiveDiamondModel : AWEBaseApiModel
{
    NSNumber *_diamondID;
    NSString *_iapID;
    long long _price;
    long long _exchangePrice;
    long long _diamondCount;
    long long _givingCount;
    NSString *_describe;
    NSString *_displayExchangePrice;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *displayExchangePrice; // @synthesize displayExchangePrice=_displayExchangePrice;
@property(copy, nonatomic) NSString *describe; // @synthesize describe=_describe;
@property(nonatomic) long long givingCount; // @synthesize givingCount=_givingCount;
@property(nonatomic) long long diamondCount; // @synthesize diamondCount=_diamondCount;
@property(nonatomic) long long exchangePrice; // @synthesize exchangePrice=_exchangePrice;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *iapID; // @synthesize iapID=_iapID;
@property(retain, nonatomic) NSNumber *diamondID; // @synthesize diamondID=_diamondID;
- (void).cxx_destruct;

@end

