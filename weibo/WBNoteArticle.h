//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, WBImageEditorCache;

@interface WBNoteArticle : NSObject
{
    NSString *_payReadLineText;
    NSString *_title;
    NSString *_summary;
    NSString *_writer;
    NSString *_content;
    NSString *_payContent;
    NSArray *_insertImages;
    WBImageEditorCache *_coverImage;
    NSString *_coverSource;
    NSString *_paragraphInfosFilePath;
    NSString *_noteSet;
    NSString *_noteSetPayType;
    NSString *_noteSetPayPrice;
    NSString *_noteSetRewardEnable;
    NSString *_noteSetRewarAttract;
    NSString *_noteSetPid;
    NSString *_noteSetVclubPid;
}

@property(copy, nonatomic) NSString *noteSetVclubPid; // @synthesize noteSetVclubPid=_noteSetVclubPid;
@property(copy, nonatomic) NSString *noteSetPid; // @synthesize noteSetPid=_noteSetPid;
@property(copy, nonatomic) NSString *noteSetRewarAttract; // @synthesize noteSetRewarAttract=_noteSetRewarAttract;
@property(copy, nonatomic) NSString *noteSetRewardEnable; // @synthesize noteSetRewardEnable=_noteSetRewardEnable;
@property(copy, nonatomic) NSString *noteSetPayPrice; // @synthesize noteSetPayPrice=_noteSetPayPrice;
@property(copy, nonatomic) NSString *noteSetPayType; // @synthesize noteSetPayType=_noteSetPayType;
@property(copy, nonatomic) NSString *noteSet; // @synthesize noteSet=_noteSet;
@property(copy, nonatomic) NSString *paragraphInfosFilePath; // @synthesize paragraphInfosFilePath=_paragraphInfosFilePath;
@property(copy, nonatomic) NSString *coverSource; // @synthesize coverSource=_coverSource;
@property(retain, nonatomic) WBImageEditorCache *coverImage; // @synthesize coverImage=_coverImage;
@property(copy, nonatomic) NSArray *insertImages; // @synthesize insertImages=_insertImages;
@property(copy, nonatomic) NSString *payContent; // @synthesize payContent=_payContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *writer; // @synthesize writer=_writer;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *payReadLineText; // @synthesize payReadLineText=_payReadLineText;
- (void).cxx_destruct;

@end

