//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WBAlertView, WBHTTPRequestOperationWrapper, WBProductEditComposeViewController;
@protocol WBComposerProductLoaderDelegate;

@interface WBComposerProductLoader : NSObject
{
    NSString *_currentLoadingSource;
    _Bool _isLastSyncFailed;
    _Bool _isWaitingUserChoice;
    _Bool _loaded;
    id <WBComposerProductLoaderDelegate> _delegate;
    NSString *_source;
    WBHTTPRequestOperationWrapper *_wrapper;
    WBProductEditComposeViewController *_baseVC;
    WBAlertView *_alertView;
}

@property(retain, nonatomic) WBAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak WBProductEditComposeViewController *baseVC; // @synthesize baseVC=_baseVC;
@property(retain, nonatomic) WBHTTPRequestOperationWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) __weak id <WBComposerProductLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadProductInfoIfNeeded;
- (void)cancel;
- (void)_checkAndReloadProductInfo;
- (id)normalizeResponse:(id)arg1;
- (void)_doServerRegexCheck:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)_doLoadProductInfoWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)_queryParameters;
- (_Bool)_allowExchangeDataFromServer;
- (void)_showProductLoaderAlertViewIfNeededWithConfirmBlock:(CDUnknownBlockType)arg1;
- (_Bool)_presentProductHelperViewIfNeeded;
- (id)_loaderUnderlyingViewController;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)initWithProductViewController:(id)arg1;
- (void)dealloc;

@end

