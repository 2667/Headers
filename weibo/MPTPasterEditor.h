//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ResourceViewDelegate-Protocol.h"

@class MPTResourceView, NSMutableArray, NSString;
@protocol MPTPasterEditorDelegate;

@interface MPTPasterEditor : UIView <ResourceViewDelegate>
{
    _Bool _isEditting;
    id <MPTPasterEditorDelegate> _delegate;
    NSMutableArray *_pasters;
    NSMutableArray *_resources;
    MPTResourceView *_currentResourceView;
    struct CGSize _videoSize;
    struct CGPoint _centerPoint;
}

@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(retain, nonatomic) MPTResourceView *currentResourceView; // @synthesize currentResourceView=_currentResourceView;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSMutableArray *pasters; // @synthesize pasters=_pasters;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool isEditting; // @synthesize isEditting=_isEditting;
@property(nonatomic) __weak id <MPTPasterEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)pastersIdentity;
- (id)audioMixForExport;
- (void)pauseSoundEffect;
- (void)seekTimeForPaster:(double)arg1;
- (void)updateTime:(double)arg1;
- (void)ResourceBeginTouched:(id)arg1;
- (void)ResourceTouched:(id)arg1;
- (void)ResourceStatusChanged:(id)arg1 center:(struct CGPoint)arg2 scale:(double)arg3 rotate:(double)arg4 fontSize:(double)arg5;
- (void)updateSelectedResource:(id)arg1;
- (void)layoutSubPaster:(id)arg1;
- (void)commonInit;
- (void)mutePasterHandler:(id)arg1;
- (void)removePasterHandle:(id)arg1;
- (void)beginEditing;
- (void)endEditing;
- (void)seek:(double)arg1 automatic:(_Bool)arg2;
- (void)editPasterAtTime:(double)arg1;
- (void)pasterEnginePaused;
- (void)pasterEnginePlayed;
- (void)resume;
- (void)pause;
- (void)addPaster:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithVideoSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

