//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseTitleUGCComponent.h"

@class UIImageView, UILabel;

@interface TBOUGCAnonymousComponent : TBOBaseTitleUGCComponent
{
    _Bool _isAnonymous;
    UIImageView *_logoImageView;
    UILabel *_tagView;
    id _data;
}

+ (id)componentName;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) UILabel *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)publish:(CDUnknownBlockType)arg1;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (void)updateWithSelectedInfo:(id)arg1;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end
