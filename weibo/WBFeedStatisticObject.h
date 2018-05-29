//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WBFeedStatisticObject : NSObject
{
    _Bool isActive;
    double _loadDataBeginTime;
    double _loadDataEndTime;
    double _loadDataDrawBeginTime;
    double _loadDataDrawEndTime;
    unsigned long long _feedOptimazationTag;
    NSString *_loadDataKey;
    NSMutableDictionary *_loadDataDict;
    NSMutableDictionary *_loadDataDictWithID;
}

@property(retain) NSMutableDictionary *loadDataDictWithID; // @synthesize loadDataDictWithID=_loadDataDictWithID;
@property(retain) NSMutableDictionary *loadDataDict; // @synthesize loadDataDict=_loadDataDict;
@property(retain) NSString *loadDataKey; // @synthesize loadDataKey=_loadDataKey;
@property unsigned long long feedOptimazationTag; // @synthesize feedOptimazationTag=_feedOptimazationTag;
@property double loadDataDrawEndTime; // @synthesize loadDataDrawEndTime=_loadDataDrawEndTime;
@property double loadDataDrawBeginTime; // @synthesize loadDataDrawBeginTime=_loadDataDrawBeginTime;
@property double loadDataEndTime; // @synthesize loadDataEndTime=_loadDataEndTime;
@property double loadDataBeginTime; // @synthesize loadDataBeginTime=_loadDataBeginTime;
- (void).cxx_destruct;
- (void)recordOptimationTag:(unsigned long long)arg1;
- (void)loadDataRecordFinishWithIdentified:(id)arg1;
- (void)loadDataRecordFinish;
- (void)loadDataDrawFinish;
- (void)loadDataDrawBegin;
- (void)recordData:(id)arg1 identified:(id)arg2;
- (void)recordData:(id)arg1;
- (id)identifiedForloadDataRecordBegin;
- (_Bool)validIdentified:(id)arg1;
- (id)loadDataRecordBegin:(id)arg1;
- (double)duringTime;
- (_Bool)isActive;
- (void)deactive;
- (void)active;
- (id)init;

@end

