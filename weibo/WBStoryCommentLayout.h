//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WBTimelineAttributedText;

@interface WBStoryCommentLayout : NSObject
{
    double _width;
    double _height;
    WBTimelineAttributedText *_contentAttributedText;
    NSString *_timeString;
    struct CGSize _timeLabelSize;
    struct CGRect _avartarFrame;
    struct CGRect _nameLabelFrame;
    struct CGRect _textFrame;
}

@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) WBTimelineAttributedText *contentAttributedText; // @synthesize contentAttributedText=_contentAttributedText;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(nonatomic) struct CGSize timeLabelSize; // @synthesize timeLabelSize=_timeLabelSize;
@property(nonatomic) struct CGRect nameLabelFrame; // @synthesize nameLabelFrame=_nameLabelFrame;
@property(nonatomic) struct CGRect avartarFrame; // @synthesize avartarFrame=_avartarFrame;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;

@end

