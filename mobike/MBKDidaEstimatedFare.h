//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKDidaEstimatedFare : NSObject
{
    long long _actualFee;
    long long _couponFee;
    long long _discountFee;
    long long _discountRadio;
    long long _distance;
    long long _duration;
    long long _joinFee;
    long long _joinSaveFee;
    long long _thanksFee;
    long long _totalFee;
    long long _unpaidFee;
    NSString *_couponCopy;
}

@property(copy, nonatomic) NSString *couponCopy; // @synthesize couponCopy=_couponCopy;
@property(nonatomic) long long unpaidFee; // @synthesize unpaidFee=_unpaidFee;
@property(nonatomic) long long totalFee; // @synthesize totalFee=_totalFee;
@property(nonatomic) long long thanksFee; // @synthesize thanksFee=_thanksFee;
@property(nonatomic) long long joinSaveFee; // @synthesize joinSaveFee=_joinSaveFee;
@property(nonatomic) long long joinFee; // @synthesize joinFee=_joinFee;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) long long discountRadio; // @synthesize discountRadio=_discountRadio;
@property(nonatomic) long long discountFee; // @synthesize discountFee=_discountFee;
@property(nonatomic) long long couponFee; // @synthesize couponFee=_couponFee;
@property(nonatomic) long long actualFee; // @synthesize actualFee=_actualFee;
- (void).cxx_destruct;

@end
