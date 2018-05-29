//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSMutableArray, NSURL, WBVideoPlayerItemPlaybackLogEvent;

@interface WBVideoPlayerStateData : NSObject
{
    double playerItemCreationTimestamp;
    double playerItemReadyTimestamp;
    double playerItemStartupTime;
    long long playerItemStatus;
    _Bool playerItemPlaybackAboutComplete;
    CDStruct_1b6d18a9 playerItemCurrentTime;
    NSURL *playerItemOriginalURL;
    CDStruct_1b6d18a9 playerItemDuration;
    WBVideoPlayerItemPlaybackLogEvent *currentPlaybackLogEvent;
    double playerLayerMostRecentRenderTimestamp;
    double playerPauseTimestamp;
    long long playerItemPlaybackBitrate;
    NSError *playerItemError;
    NSMutableArray *_statisticsDatas;
    NSDictionary *_viewControllerAnalysisParameters;
    NSDictionary *_sourceViewExtraLogParameters;
    NSDictionary *_sourceViewPageInfoAnalysisParameters;
}

@property(retain, nonatomic) NSDictionary *sourceViewPageInfoAnalysisParameters; // @synthesize sourceViewPageInfoAnalysisParameters=_sourceViewPageInfoAnalysisParameters;
@property(retain, nonatomic) NSDictionary *sourceViewExtraLogParameters; // @synthesize sourceViewExtraLogParameters=_sourceViewExtraLogParameters;
@property(retain, nonatomic) NSDictionary *viewControllerAnalysisParameters; // @synthesize viewControllerAnalysisParameters=_viewControllerAnalysisParameters;
@property(retain, nonatomic) NSMutableArray *statisticsDatas; // @synthesize statisticsDatas=_statisticsDatas;
- (void).cxx_destruct;
- (void)updateWithPlayerItem:(id)arg1 playerLayer:(id)arg2;
- (void)appendStatisticsData:(id)arg1;
- (id)init;

@end

