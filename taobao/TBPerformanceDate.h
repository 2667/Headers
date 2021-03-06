//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface TBPerformanceDate : NSObject
{
    int _eventId;
    NSDate *_beginDate;
    NSDate *_endDate;
    NSString *_page;
    NSString *_eventType;
    NSMutableDictionary *_userInfo;
    NSDate *_prePhaseDate;
    NSString *_prePhaseName;
    NSMutableDictionary *_phaseArray;
    NSMutableArray *_normalPhaseArray;
}

+ (id)write_log_queue;
+ (id)currentLogFileHandle;
@property(retain, nonatomic) NSMutableArray *normalPhaseArray; // @synthesize normalPhaseArray=_normalPhaseArray;
@property(retain, nonatomic) NSMutableDictionary *phaseArray; // @synthesize phaseArray=_phaseArray;
@property(retain, nonatomic) NSString *prePhaseName; // @synthesize prePhaseName=_prePhaseName;
@property(retain, nonatomic) NSDate *prePhaseDate; // @synthesize prePhaseDate=_prePhaseDate;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) int eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
- (void).cxx_destruct;
- (void)clearCurrentPerformanceUserTrack;
- (void)endPerformanceUserTrack;
- (void)startPerformanceUserTrackOnPage:(id)arg1 eventType:(id)arg2 eventId:(int)arg3;
- (void)writeLog:(id)arg1;

@end

