//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, WBImageEditorBrushBezierPath;

@interface WBBrushLayerParame : NSObject
{
    unsigned long long _type;
    WBImageEditorBrushBezierPath *_path;
    double _pathWidth;
    UIColor *_color;
    NSString *_uicode;
    double _imageWidth;
}

@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSString *uicode; // @synthesize uicode=_uicode;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double pathWidth; // @synthesize pathWidth=_pathWidth;
@property(retain, nonatomic) WBImageEditorBrushBezierPath *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1;

@end

