//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSDiskCache, KSFreeTrafficDetailInfo;
@protocol KSFreeTrafficAgentProtocol, NSObject;

@interface KSFreeTrafficService : NSObject
{
    KSDiskCache *_cache;
    KSFreeTrafficDetailInfo *_freeTrafficDetailInfo;
    _Bool _isDetecting;
    _Bool _userForcePlay;
    id <KSFreeTrafficAgentProtocol> _cardAgent;
    id <NSObject> _observeNetworkToken;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <NSObject> observeNetworkToken; // @synthesize observeNetworkToken=_observeNetworkToken;
@property(retain, nonatomic) id <KSFreeTrafficAgentProtocol> cardAgent; // @synthesize cardAgent=_cardAgent;
@property(nonatomic) _Bool userForcePlay; // @synthesize userForcePlay=_userForcePlay;
@property _Bool isDetecting; // @synthesize isDetecting=_isDetecting;
- (void).cxx_destruct;
- (id)promptOfFreeTrafficPromptType:(unsigned long long)arg1;
- (void)clearCache;
- (void)cacheValues;
- (void)readCache;
- (id)getCurrentTrafficAgent:(id)arg1;
- (void)askUserPlay:(_Bool)arg1 cdns:(id)arg2 live:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)shouldPlayLiveStream:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)shouldPlayVideo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned long long)userState;
- (_Bool)freePlanIsOn;
- (_Bool)freeTrafficActivated;
- (void)addTrafficFlagForNetworkCommonParam;
- (void)updateTrafficDetailInfoWithTrafficResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)observerNeedsUpdateFreeTrafficDetailInfo:(id)arg1;
- (_Bool)isCertainFreeTrafficState;
- (void)removeObserverTokenForReachability;
- (void)observeNetworkStatus;
- (id)checkTrafficStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)checkTrafficState;
- (void)checkFreeTrafficStateIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)forceCheckFreeTrafficState;
- (void)updateFreeTrafficStateIfNeededWithTimeMark:(id)arg1;
- (void)observerNeedsUpdateFreeTrafficState;
- (void)detectFreeTraffic;
- (void)dealloc;
- (id)init;

@end

