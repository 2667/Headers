//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/FTSDataManagerProtocol-Protocol.h>

@class FTSDataManager, FTSSearchEngineForJsAPI, NSObject, NSString, QQLockDictionary;
@protocol OS_dispatch_source;

@interface QQJSBridgeFTSSearchPlugin : QQWebViewPluginQQBizBase <FTSDataManagerProtocol, AvatarServiceDelegate>
{
    FTSSearchEngineForJsAPI *_ftsSearchEngine;
    FTSDataManager *_ftsDataManager;
    _Bool _ftsReStartEngine;
    unsigned long long _ftsFilter;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSString *_callback;
    QQLockDictionary *_callbackForGetAvatarDict;
    NSString *_searchWord;
    QQLockDictionary *_resultModelsDict;
}

@property(retain, nonatomic) QQLockDictionary *resultModelsDict; // @synthesize resultModelsDict=_resultModelsDict;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(copy, nonatomic) QQLockDictionary *callbackForGetAvatarDict; // @synthesize callbackForGetAvatarDict=_callbackForGetAvatarDict;
@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
- (void)handleJsBridgeRequest_ftssearch_clickResult:(id)arg1;
- (void)loadMsgAvatar:(id)arg1 callback:(id)arg2;
- (void)loadRelationAvatar:(id)arg1 callback:(id)arg2;
- (void)handleJsBridgeRequest_ftssearch_loadAvatarImage:(id)arg1;
- (void)fillHasMore:(id)arg1 dict:(id)arg2;
- (id)convertFavoriteOutlineResultsToArray:(id)arg1;
- (id)convertFileOutlineResultsToArray:(id)arg1;
- (id)convertMsgResultsToArray:(id)arg1;
- (id)convertRelationResultsToArray:(id)arg1;
- (id)convertFunctionResultsToArray:(id)arg1;
- (id)convertResultsToArray:(id)arg1;
- (void)handleJsBridgeRequest_ftssearch_search:(id)arg1;
- (unsigned long long)convertJsFtsTypeToLocalFtsType:(unsigned long long)arg1;
- (id)ftsGetAllFeedModel;
- (void)stopTimeOutTimer;
- (void)startTimeOutTimer;
- (id)ftsGetResultsKeyword:(id)arg1;
- (void)handleFTSSearchEngineResultsNotifForJsAPI:(id)arg1;
- (void)ftsSearchEngineDealloc;
- (void)ftsSearchEngineDelayDealloc;
- (void)p_reStartFTSEngine;
- (void)ftsSearchPluginInit:(unsigned long long)arg1;
- (void)dealloc;
- (long long)onGetFiliter;
- (id)onGetSearchKeyword;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

