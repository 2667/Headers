//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TTFCurrencyInfo;

@interface TTFActivityInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long activityId; // @dynamic activityId;
@property(retain, nonatomic) TTFCurrencyInfo *currencyInfo; // @dynamic currencyInfo;
@property(nonatomic) _Bool hasCurrencyInfo; // @dynamic hasCurrencyInfo;
@property(copy, nonatomic) NSString *labelURL; // @dynamic labelURL;
@property(nonatomic) long long plannedTime; // @dynamic plannedTime;
@property(copy, nonatomic) NSString *prizeColor; // @dynamic prizeColor;
@property(nonatomic) long long prizeNumber; // @dynamic prizeNumber;
@property(copy, nonatomic) NSString *prizeString; // @dynamic prizeString;

@end

