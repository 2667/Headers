//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBPopLayerAnchorViewProtocol-Protocol.h"
#import "TBPopLayerConsoleViewProtocal-Protocol.h"

@class NSString, TBPopLayerAnchorView, TBPopLayerConsoleView;

@interface TBPopLayerConsoleManager : NSObject <TBPopLayerAnchorViewProtocol, TBPopLayerConsoleViewProtocal>
{
    _Bool _monitored;
    TBPopLayerConsoleView *_consoleView;
    TBPopLayerAnchorView *_anchorView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBPopLayerAnchorView *anchorView; // @synthesize anchorView=_anchorView;
@property(retain, nonatomic) TBPopLayerConsoleView *consoleView; // @synthesize consoleView=_consoleView;
@property(nonatomic) _Bool monitored; // @synthesize monitored=_monitored;
- (void).cxx_destruct;
- (id)gestureViewRecursive:(id)arg1 withWindowCoordPoint:(struct CGPoint)arg2;
- (id)gestureView:(id)arg1;
- (void)appendPopLayerTrackingConsoleWithText:(id)arg1;
- (void)appendPopLayerWindVaneConsoleWithText:(id)arg1;
- (void)appendPopLayerViewLogConsoleWithAttributedText:(id)arg1;
- (void)setAppPopLayerStatusConsoleWithAttributedText:(id)arg1;
- (void)setPopLayerStatusConsoleWithAttributedText:(id)arg1;
- (void)swizzMethods:(_Bool)arg1;
- (void)finishMonitor;
- (void)startMonitor;
- (void)switchConsoleVisibility;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
