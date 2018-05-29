//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface YXLiveCountDownManager : NSObject
{
    _Bool _isPaused;
    unsigned long long _time;
    NSTimer *_timer;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _intervalBlock;
    unsigned long long _totalSecond;
}

@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) unsigned long long totalSecond; // @synthesize totalSecond=_totalSecond;
@property(copy, nonatomic) CDUnknownBlockType intervalBlock; // @synthesize intervalBlock=_intervalBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
- (void).cxx_destruct;
- (void)destroy;
- (void)resume;
- (void)pause;
- (void)intervalUpdate;
- (id)initWithFinishBlock:(CDUnknownBlockType)arg1 andintervalBlock:(CDUnknownBlockType)arg2 totalSeconds:(unsigned long long)arg3;

@end

