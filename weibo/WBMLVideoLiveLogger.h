//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableArray, NSNumber, NSString;

@interface WBMLVideoLiveLogger : NSObject
{
    CDStruct_1b6d18a9 _currentPlaySegmentBeginPosition;
    double _validPlayDuration;
    _Bool _isLive;
    _Bool _isFirstFrameRendered;
    _Bool _isPlaybackEnd;
    double _logStartTime;
    NSDictionary *_liveLogDic;
    NSError *_error;
    double _playStartTime;
    double _videoDnsDuration;
    double _videoHttpOpenDuration;
    double _videoTcpOpenDuration;
    long long _playerType;
    double _videoOpenFormatDuration;
    double _videoFindStreamDuration;
    double _videoOpenStreamDuration;
    double _video1stVPacketDuration;
    double _video1stAPacketDuration;
    double _video1stVDecodeDuration;
    double _video1stADecodeDration;
    double _video1stVRenderDuration;
    double _video1stARenderDuration;
    NSMutableArray *_userSeekDragOperations;
    NSNumber *_userSeekDragStartTime;
    NSMutableArray *_timeDurations;
    NSDate *_stallStartDate;
    NSDate *_seekStartDate;
    NSString *_networkType;
    CDStruct_1b6d18a9 _videoResumeTime;
    CDStruct_1b6d18a9 _maxPlayTime;
}

+ (id)encapsulateLiveLog:(id)arg1 objectId:(id)arg2 viewControllerParameters:(id)arg3;
@property(nonatomic) CDStruct_1b6d18a9 maxPlayTime; // @synthesize maxPlayTime=_maxPlayTime;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSDate *seekStartDate; // @synthesize seekStartDate=_seekStartDate;
@property(retain, nonatomic) NSDate *stallStartDate; // @synthesize stallStartDate=_stallStartDate;
@property(retain, nonatomic) NSMutableArray *timeDurations; // @synthesize timeDurations=_timeDurations;
@property(retain, nonatomic) NSNumber *userSeekDragStartTime; // @synthesize userSeekDragStartTime=_userSeekDragStartTime;
@property(retain, nonatomic) NSMutableArray *userSeekDragOperations; // @synthesize userSeekDragOperations=_userSeekDragOperations;
@property(nonatomic) double video1stARenderDuration; // @synthesize video1stARenderDuration=_video1stARenderDuration;
@property(nonatomic) double video1stVRenderDuration; // @synthesize video1stVRenderDuration=_video1stVRenderDuration;
@property(nonatomic) double video1stADecodeDration; // @synthesize video1stADecodeDration=_video1stADecodeDration;
@property(nonatomic) double video1stVDecodeDuration; // @synthesize video1stVDecodeDuration=_video1stVDecodeDuration;
@property(nonatomic) double video1stAPacketDuration; // @synthesize video1stAPacketDuration=_video1stAPacketDuration;
@property(nonatomic) double video1stVPacketDuration; // @synthesize video1stVPacketDuration=_video1stVPacketDuration;
@property(nonatomic) double videoOpenStreamDuration; // @synthesize videoOpenStreamDuration=_videoOpenStreamDuration;
@property(nonatomic) double videoFindStreamDuration; // @synthesize videoFindStreamDuration=_videoFindStreamDuration;
@property(nonatomic) double videoOpenFormatDuration; // @synthesize videoOpenFormatDuration=_videoOpenFormatDuration;
@property(nonatomic) _Bool isPlaybackEnd; // @synthesize isPlaybackEnd=_isPlaybackEnd;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) double videoTcpOpenDuration; // @synthesize videoTcpOpenDuration=_videoTcpOpenDuration;
@property(nonatomic) double videoHttpOpenDuration; // @synthesize videoHttpOpenDuration=_videoHttpOpenDuration;
@property(nonatomic) double videoDnsDuration; // @synthesize videoDnsDuration=_videoDnsDuration;
@property(nonatomic) double playStartTime; // @synthesize playStartTime=_playStartTime;
@property(nonatomic) _Bool isFirstFrameRendered; // @synthesize isFirstFrameRendered=_isFirstFrameRendered;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *liveLogDic; // @synthesize liveLogDic=_liveLogDic;
@property(nonatomic) CDStruct_1b6d18a9 videoResumeTime; // @synthesize videoResumeTime=_videoResumeTime;
@property(nonatomic) double logStartTime; // @synthesize logStartTime=_logStartTime;
- (void).cxx_destruct;
- (id)_currentLogData;
- (id)currentNetworkType;
- (void)finalizeLog:(id)arg1;
- (void)playerDidCompleteSeekWithFinished:(_Bool)arg1 currentTime:(CDStruct_1b6d18a9)arg2;
- (void)playerDidStartSeekWithTime:(CDStruct_1b6d18a9)arg1;
- (void)playerItemPlaybackIsLikelyToKeepup;
- (void)playerItemDidStall;
- (void)userFinishSeekDragOperationWithTime:(CDStruct_1b6d18a9)arg1;
- (void)userStartSeekDragOperationWithTime:(CDStruct_1b6d18a9)arg1;
- (id)finishPlayingWithStartupTime:(double)arg1 currentTime:(double)arg2 cancelled:(_Bool)arg3 url:(id)arg4 duration:(double)arg5 videoType:(id)arg6 error:(id)arg7;
- (void)_addTimeDurationRecordWithType:(long long)arg1 duration:(double)arg2 cancelled:(_Bool)arg3;
- (_Bool)_cancelCurrentSeekIfExist;
- (_Bool)_cancelCurrentStallIfExist;
- (void)_increaseValidPlayDurationWithPlaySegmentEndPosition:(CDStruct_1b6d18a9)arg1;
- (double)currentPlaySegmentDurationWithEndPosition:(CDStruct_1b6d18a9)arg1;
- (id)init;
- (void)dealloc;

@end

