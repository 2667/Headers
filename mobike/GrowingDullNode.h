//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GrowingNode-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSValue, UIWindow;
@protocol GrowingNode, GrowingNodeAsyncNativeHandler;

@interface GrowingDullNode : NSObject <GrowingNode>
{
    _Bool _growingNodeDonotTrack;
    _Bool _growingNodeDonotCircle;
    _Bool _growingNodeUserInteraction;
    NSString *_growingNodeXPath;
    long long _growingNodeKeyIndex;
    NSString *_growingNodeHyperlink;
    NSString *_growingNodeType;
    NSString *_growingAttributesInfo;
    NSValue *_safeAreaInsetsValue;
    id <GrowingNode> _growingNodeParent;
    NSString *_growingNodeName;
    NSString *_growingNodeContent;
    NSNumber *_growingNodeIndex;
    NSDictionary *_growingNodeDataDict;
    UIWindow *_growingNodeWindow;
    id <GrowingNodeAsyncNativeHandler> _growingNodeAsyncNativeHandler;
    struct CGRect _growingNodeFrame;
}

@property(nonatomic) __weak id <GrowingNodeAsyncNativeHandler> growingNodeAsyncNativeHandler; // @synthesize growingNodeAsyncNativeHandler=_growingNodeAsyncNativeHandler;
@property(nonatomic) struct CGRect growingNodeFrame; // @synthesize growingNodeFrame=_growingNodeFrame;
@property(nonatomic) __weak UIWindow *growingNodeWindow; // @synthesize growingNodeWindow=_growingNodeWindow;
@property(nonatomic) __weak NSDictionary *growingNodeDataDict; // @synthesize growingNodeDataDict=_growingNodeDataDict;
@property(nonatomic) __weak NSNumber *growingNodeIndex; // @synthesize growingNodeIndex=_growingNodeIndex;
@property(copy, nonatomic) NSString *growingNodeContent; // @synthesize growingNodeContent=_growingNodeContent;
@property(copy, nonatomic) NSString *growingNodeName; // @synthesize growingNodeName=_growingNodeName;
@property(nonatomic) _Bool growingNodeUserInteraction; // @synthesize growingNodeUserInteraction=_growingNodeUserInteraction;
@property(nonatomic) _Bool growingNodeDonotCircle; // @synthesize growingNodeDonotCircle=_growingNodeDonotCircle;
@property(nonatomic) _Bool growingNodeDonotTrack; // @synthesize growingNodeDonotTrack=_growingNodeDonotTrack;
@property(nonatomic) __weak id <GrowingNode> growingNodeParent; // @synthesize growingNodeParent=_growingNodeParent;
@property(retain, nonatomic) NSValue *safeAreaInsetsValue; // @synthesize safeAreaInsetsValue=_safeAreaInsetsValue;
@property(copy, nonatomic) NSString *growingAttributesInfo; // @synthesize growingAttributesInfo=_growingAttributesInfo;
@property(copy, nonatomic) NSString *growingNodeType; // @synthesize growingNodeType=_growingNodeType;
@property(copy, nonatomic) NSString *growingNodeHyperlink; // @synthesize growingNodeHyperlink=_growingNodeHyperlink;
@property(nonatomic) long long growingNodeKeyIndex; // @synthesize growingNodeKeyIndex=_growingNodeKeyIndex;
@property(copy, nonatomic) NSString *growingNodeXPath; // @synthesize growingNodeXPath=_growingNodeXPath;
- (void).cxx_destruct;
- (id)growingNodeAttachedInfoNode;
- (id)growingNodeAttribute:(id)arg1 forChild:(id)arg2;
- (id)growingNodeAttribute:(id)arg1;
- (id)growingNodeScreenShotWithScale:(double)arg1;
- (id)growingNodeScreenShot:(id)arg1;
- (void)growingNodeHighLight:(_Bool)arg1 withBorderColor:(id)arg2 andBackgroundColor:(id)arg3;
- (void)growingNodeOutChilds:(id)arg1 outPaths:(id)arg2 filterChildNode:(id)arg3;
- (void)growingNodeOutContainerChilds:(id)arg1 outPaths:(id)arg2 filterChildNode:(id)arg3;
- (id)initWithName:(id)arg1 andContent:(id)arg2 andUserInteraction:(_Bool)arg3 andFrame:(struct CGRect)arg4 andKeyIndex:(long long)arg5 andXPath:(id)arg6 andHyperlink:(id)arg7 andNodeType:(id)arg8 andNodAttributesInfo:(id)arg9 andSafeAreaInsetsValue:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
