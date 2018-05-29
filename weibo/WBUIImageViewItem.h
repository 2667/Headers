//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUIViewItem.h"

@class UIImage;

@interface WBUIImageViewItem : WBUIViewItem
{
    long long _drawMode;
    _Bool _highlighted;
    UIImage *_highlightedImage;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setDrawMode:(long long)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

