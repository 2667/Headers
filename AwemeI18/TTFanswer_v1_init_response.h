//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, TTFUserStruct;

@interface TTFanswer_v1_init_response : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errNo; // @dynamic errNo;
@property(copy, nonatomic) NSString *errTips; // @dynamic errTips;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(retain, nonatomic) NSMutableArray *streamArray; // @dynamic streamArray;
@property(readonly, nonatomic) unsigned long long streamArray_Count; // @dynamic streamArray_Count;
@property(retain, nonatomic) TTFUserStruct *user; // @dynamic user;

@end

