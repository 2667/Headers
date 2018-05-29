//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFCLBaseCell.h"

#import "WBCommentMultiMediaProtocol-Protocol.h"
#import "WBCommentSplashProtocol-Protocol.h"
#import "WBTimelineImageContentViewDelegate-Protocol.h"

@class NSString, UIView, WBCommentImageContentView, WBTimelineAttributedTextView;

@interface WBSubCommentCell : WBFCLBaseCell <WBTimelineImageContentViewDelegate, WBCommentSplashProtocol, WBCommentMultiMediaProtocol>
{
    UIView *subBackgroudView;
    WBTimelineAttributedTextView *contentTextView;
    UIView *contentTextBackgroundView;
    WBCommentImageContentView *commentImageView;
}

- (void).cxx_destruct;
- (void)didTappedOnView:(id)arg1 withPicture:(id)arg2;
- (void)timelineImageContentView:(id)arg1 didSelectPicture:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)resumeMultiMediaEvent;
- (void)pauseMultiMediaEvent;
- (void)splashDidFinished:(id)arg1;
- (void)splashWillStart:(id)arg1;
- (void)setupCellData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

