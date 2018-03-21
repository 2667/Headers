//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCBaseHandlerImp, MCBaseItemView, MCBaseVo;
@protocol TBMCBasePresenteDelegate;

@protocol TBMCBasePresenteProtocol <NSObject>
@property(retain, nonatomic) MCBaseHandlerImp *handler;
@property(nonatomic) __weak id <TBMCBasePresenteDelegate> delegate;
@property(retain, nonatomic) MCBaseItemView *view;
@property(retain, nonatomic) MCBaseVo *vo;
- (void)refresh;
- (void)load;
- (void)onDataChanged;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@end
