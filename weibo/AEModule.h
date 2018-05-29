//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AERenderer;

@interface AEModule : NSObject
{
    CDUnknownFunctionPointerType _processFunction;
    CDUnknownFunctionPointerType _isActiveFunction;
    AERenderer *_renderer;
}

@property(nonatomic) __weak AERenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) CDUnknownFunctionPointerType isActiveFunction; // @synthesize isActiveFunction=_isActiveFunction;
@property(nonatomic) CDUnknownFunctionPointerType processFunction; // @synthesize processFunction=_processFunction;
- (void).cxx_destruct;
- (void)rendererDidChangeNumberOfChannels;
- (void)rendererDidChangeSampleRate;
- (void)stopObservingRenderer;
- (void)startObservingRenderer;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1;

@end

