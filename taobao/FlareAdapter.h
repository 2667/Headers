//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FlareAdapterLifeCycleProtocol-Protocol.h"
#import "FlareAnimationActionProtocol-Protocol.h"
#import "FlareAnimationCallbackProtocol-Protocol.h"

@class FlareAnimationService, FlareJSService, NSDictionary, NSString;

@interface FlareAdapter : NSObject <FlareAnimationActionProtocol, FlareAdapterLifeCycleProtocol, FlareAnimationCallbackProtocol>
{
    _Bool _isActivate;
    NSString *_instanceName;
    FlareJSService *_jsService;
    FlareAnimationService *_animationService;
    CDUnknownBlockType _componentFindBlock;
    CDUnknownBlockType _animationIDFindBlock;
    CDUnknownBlockType _animationDidStartBlock;
    CDUnknownBlockType _animationDidStopBlock;
    NSDictionary *_bindMap;
}

@property(retain, nonatomic) NSDictionary *bindMap; // @synthesize bindMap=_bindMap;
@property(copy, nonatomic) CDUnknownBlockType animationDidStopBlock; // @synthesize animationDidStopBlock=_animationDidStopBlock;
@property(copy, nonatomic) CDUnknownBlockType animationDidStartBlock; // @synthesize animationDidStartBlock=_animationDidStartBlock;
@property(copy, nonatomic) CDUnknownBlockType animationIDFindBlock; // @synthesize animationIDFindBlock=_animationIDFindBlock;
@property(copy, nonatomic) CDUnknownBlockType componentFindBlock; // @synthesize componentFindBlock=_componentFindBlock;
@property(retain, nonatomic) FlareAnimationService *animationService; // @synthesize animationService=_animationService;
@property(retain, nonatomic) FlareJSService *jsService; // @synthesize jsService=_jsService;
@property(readonly, nonatomic) _Bool isActivate; // @synthesize isActivate=_isActivate;
@property(retain, nonatomic) NSString *instanceName; // @synthesize instanceName=_instanceName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)configUpdate;
- (void)registerNotification;
- (void)playAnimation:(id)arg1 onTarget:(id)arg2 foKey:(id)arg3;
- (void)animationDidStopWithComponentKey:(id)arg1 animationID:(id)arg2;
- (void)animationDidStartWithComponentKey:(id)arg1 animationID:(id)arg2;
- (void)registerAnimationDidStopCallback:(CDUnknownBlockType)arg1;
- (void)registerAnimationDidStartCallback:(CDUnknownBlockType)arg1;
- (void)registerAnimationIDFindBlock:(CDUnknownBlockType)arg1;
- (void)registerComponentFindBlock:(CDUnknownBlockType)arg1;
- (void)playAnimationWithComponentKey:(id)arg1 animationData:(id)arg2;
- (void)registerBindMap:(id)arg1;
- (void)playAnimationWithComponentKey:(id)arg1 animationID:(id)arg2 after:(id)arg3;
- (void)playAnimationWithComponentKey:(id)arg1 after:(id)arg2;
- (void)playAnimationWithData:(id)arg1;
- (void)addAnimationDescriptionData:(id)arg1;
- (id)animationIDForComponentKey:(id)arg1;
- (void)playAnimationWithComponentKey:(id)arg1 animationID:(id)arg2;
- (void)playAnimationWithComponentKey:(id)arg1;
- (void)invokeCustomMethod:(id)arg1 withArguments:(id)arg2;
- (void)refresh;
- (void)appear;
- (void)bind;
- (void)setupWithName:(id)arg1 script:(id)arg2;
- (void)reload;
- (void)setup;
- (id)initWithInstanceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
