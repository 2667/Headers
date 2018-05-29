//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface TTFActivityConfigStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long activityId; // @dynamic activityId;
@property(retain, nonatomic) NSMutableArray *answersArray; // @dynamic answersArray;
@property(readonly, nonatomic) unsigned long long answersArray_Count; // @dynamic answersArray_Count;
@property(nonatomic) long long bonusPrize; // @dynamic bonusPrize;
@property(nonatomic) long long countdown; // @dynamic countdown;
@property(copy, nonatomic) NSString *describe; // @dynamic describe;
@property(nonatomic) int liveGroupId; // @dynamic liveGroupId;
@property(copy, nonatomic) NSString *logoImageURL; // @dynamic logoImageURL;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long nextActivityId; // @dynamic nextActivityId;
@property(nonatomic) long long plannedTime; // @dynamic plannedTime;
@property(nonatomic) long long prize; // @dynamic prize;
@property(retain, nonatomic) NSMutableArray *questionBonusConfArray; // @dynamic questionBonusConfArray;
@property(readonly, nonatomic) unsigned long long questionBonusConfArray_Count; // @dynamic questionBonusConfArray_Count;
@property(retain, nonatomic) NSMutableArray *questionsArray; // @dynamic questionsArray;
@property(readonly, nonatomic) unsigned long long questionsArray_Count; // @dynamic questionsArray_Count;
@property(copy, nonatomic) NSString *region; // @dynamic region;
@property(nonatomic) long long teamPrize; // @dynamic teamPrize;
@property(copy, nonatomic) NSString *vid; // @dynamic vid;

@end

