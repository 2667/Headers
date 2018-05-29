//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WBBasicWebViewController, WBJSPermissionManager, WBWebViewUserScript;
@protocol WBJSBridgeDebugDelegate;

@interface WBWebViewJSBridge : NSObject
{
    NSMutableArray *_actions;
    NSMutableDictionary *_eventObservers;
    WBBasicWebViewController *_webViewController;
    id <WBJSBridgeDebugDelegate> _debugDelegate;
    NSMutableDictionary *_blockActions;
    NSString *_scriptContent;
    NSString *_iframeScriptContent;
    NSString *_documentEventsScriptContent;
    WBWebViewUserScript *_bridgeUserScript;
}

+ (void)setPermissionCheckDisabled:(_Bool)arg1;
+ (_Bool)permissionCheckDisabled;
+ (void)initialize;
+ (id)openURLActionMap;
@property(retain, nonatomic) WBWebViewUserScript *bridgeUserScript; // @synthesize bridgeUserScript=_bridgeUserScript;
@property(retain, nonatomic) NSString *documentEventsScriptContent; // @synthesize documentEventsScriptContent=_documentEventsScriptContent;
@property(retain, nonatomic) NSString *iframeScriptContent; // @synthesize iframeScriptContent=_iframeScriptContent;
@property(retain, nonatomic) NSString *scriptContent; // @synthesize scriptContent=_scriptContent;
@property(retain, nonatomic) NSMutableDictionary *blockActions; // @synthesize blockActions=_blockActions;
@property(nonatomic) __weak id <WBJSBridgeDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic) __weak WBBasicWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)appendBridgeUserScript;
- (void)updateUserScriptSessionData;
- (void)requestSessionDataUpdate;
- (id)scriptContentWithSessionData:(id)arg1;
- (id)currentSessionData;
@property(readonly, nonatomic) NSMutableDictionary *eventObservers; // @synthesize eventObservers=_eventObservers;
- (void)initializeBridge;
- (void)registerActionHandler:(CDUnknownBlockType)arg1 forAction:(id)arg2;
- (_Bool)observerAvailabilityForName:(id)arg1 url:(id)arg2;
- (_Bool)actionAvailabilityForName:(id)arg1 url:(id)arg2;
- (_Bool)actionAccessIsLegal:(id)arg1 forURL:(id)arg2;
- (_Bool)apiAccessIsLegal:(id)arg1 forURL:(id)arg2;
- (_Bool)actionAccessIsLegal:(id)arg1;
- (_Bool)handleWebViewURL:(id)arg1;
- (void)processMessageQueue:(id)arg1;
- (void)actionDidFinish:(id)arg1 withResult:(id)arg2 status:(long long)arg3;
- (void)processMessageUnregister:(id)arg1;
- (void)processMessageRegister:(id)arg1;
- (void)processMessageCall:(id)arg1;
- (void)triggerEvent:(id)arg1 params:(id)arg2;
- (void)sendCallbackForMessage:(id)arg1 result:(id)arg2 status:(long long)arg3;
- (void)sendMessage:(id)arg1;
- (void)evaluateJS:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)evaluateJS:(id)arg1;
- (id)initWithWebViewController:(id)arg1;
- (void)dealloc;
- (void)unregisterAllEvents;
- (long long)unregisterEvent:(id)arg1;
- (long long)registerEvent:(id)arg1;
@property(readonly, nonatomic) WBJSPermissionManager *permissionManager;

@end

