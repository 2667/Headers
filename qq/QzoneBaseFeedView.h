//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class QZLayoutInfo;

@interface QzoneBaseFeedView : UIImageView
{
    _Bool _rendered;
    _Bool _lastRenderAynsc;
    QZLayoutInfo *_info;
}

@property(retain, nonatomic) QZLayoutInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)refreshRenderAsync:(_Bool)arg1 useCache:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
