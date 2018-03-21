//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOUGCMiniBaseComponent.h"

@class NSMutableArray;

@interface TBOUGCMiniImageComponent : TBOUGCMiniBaseComponent
{
    NSMutableArray *_photoList;
}

@property(retain, nonatomic) NSMutableArray *photoList; // @synthesize photoList=_photoList;
- (void).cxx_destruct;
- (void)_onAddImage:(struct UIView *)arg1 isPannel:(_Bool)arg2;
- (void)doActionWithCompleted:(CDUnknownBlockType)arg1;
- (void)doAddImageWithComponent:(struct UIView *)arg1 completed:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)commitWithCompleted:(CDUnknownBlockType)arg1;
- (_Bool)isNetworkImage:(id)arg1;
- (void)imagePreviewHandler:(struct UIView *)arg1;
- (void)imagePreview:(struct UIView *)arg1;
- (void)addPthotos:(id)arg1;
- (void)imageRemoveHandler:(struct UIView *)arg1;
- (void)imageRemove:(struct UIView *)arg1;
- (void)imageAddHandler:(struct UIView *)arg1;
- (void)imageHandler:(struct UIView *)arg1;
- (_Bool)isValid;

@end
