//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YXLiveTimer;
@protocol WBNLHourBoardTimerManagerDelegate;

@interface WBNLHourBoardTimerManager : NSObject
{
    double _currentTime;
    id <WBNLHourBoardTimerManagerDelegate> _delegate;
    double _targetTimeSinceBoot;
    YXLiveTimer *_countDownTimer;
}

+ (double)timeSinceBoot;
@property(retain, nonatomic) YXLiveTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) double targetTimeSinceBoot; // @synthesize targetTimeSinceBoot=_targetTimeSinceBoot;
@property(nonatomic) __weak id <WBNLHourBoardTimerManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (void)dealloc;
- (double)generateTargetTimeFromCurrentTime:(double)arg1;
- (void)stopUpdateTime;
- (void)resetTimer;
- (void)countDownTimerFired;
- (void)startUpdateTime;

@end

