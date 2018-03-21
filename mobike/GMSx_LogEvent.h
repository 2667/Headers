//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray, NSData, NSString;

@interface GMSx_LogEvent : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long bootCount; // @dynamic bootCount;
@property(retain, nonatomic) NSData *clientVe; // @dynamic clientVe;
@property(retain, nonatomic) NSString *clientVeJs; // @dynamic clientVeJs;
@property(nonatomic) int eventCode; // @dynamic eventCode;
@property(nonatomic) int eventFlowId; // @dynamic eventFlowId;
@property(nonatomic) long long eventTimeMs; // @dynamic eventTimeMs;
@property(nonatomic) long long eventUptimeMs; // @dynamic eventUptimeMs;
@property(nonatomic) _Bool hasBootCount; // @dynamic hasBootCount;
@property(nonatomic) _Bool hasClientVe; // @dynamic hasClientVe;
@property(nonatomic) _Bool hasClientVeJs; // @dynamic hasClientVeJs;
@property(nonatomic) _Bool hasEventCode; // @dynamic hasEventCode;
@property(nonatomic) _Bool hasEventFlowId; // @dynamic hasEventFlowId;
@property(nonatomic) _Bool hasEventTimeMs; // @dynamic hasEventTimeMs;
@property(nonatomic) _Bool hasEventUptimeMs; // @dynamic hasEventUptimeMs;
@property(nonatomic) _Bool hasIsUserInitiated; // @dynamic hasIsUserInitiated;
@property(nonatomic) _Bool hasSequencePosition; // @dynamic hasSequencePosition;
@property(nonatomic) _Bool hasSourceExtension; // @dynamic hasSourceExtension;
@property(nonatomic) _Bool hasSourceExtensionJs; // @dynamic hasSourceExtensionJs;
@property(nonatomic) _Bool hasSourceExtensionJson; // @dynamic hasSourceExtensionJson;
@property(nonatomic) _Bool hasStore; // @dynamic hasStore;
@property(nonatomic) _Bool hasTag; // @dynamic hasTag;
@property(nonatomic) _Bool hasTestCodeArray; // @dynamic hasTestCodeArray;
@property(nonatomic) _Bool hasTestId; // @dynamic hasTestId;
@property(nonatomic) _Bool hasTimezoneOffsetSeconds; // @dynamic hasTimezoneOffsetSeconds;
@property(nonatomic) _Bool isUserInitiated; // @dynamic isUserInitiated;
@property(nonatomic) long long sequencePosition; // @dynamic sequencePosition;
@property(retain, nonatomic) NSData *sourceExtension; // @dynamic sourceExtension;
@property(retain, nonatomic) NSString *sourceExtensionJs; // @dynamic sourceExtensionJs;
@property(retain, nonatomic) NSString *sourceExtensionJson; // @dynamic sourceExtensionJson;
@property(retain, nonatomic) NSData *store; // @dynamic store;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;
@property(retain, nonatomic) GMSx_PBMutableArray *testCodeArray; // @dynamic testCodeArray;
@property(retain, nonatomic) NSString *testId; // @dynamic testId;
@property(nonatomic) long long timezoneOffsetSeconds; // @dynamic timezoneOffsetSeconds;

@end
