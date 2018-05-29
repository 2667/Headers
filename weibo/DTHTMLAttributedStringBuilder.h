//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTHTMLParserDelegate-Protocol.h"

@class DTCSSStylesheet, DTCoreTextFontDescriptor, DTCoreTextParagraphStyle, DTHTMLElement, NSData, NSDictionary, NSMutableAttributedString, NSMutableDictionary, NSString, NSURL, UIColor;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface DTHTMLAttributedStringBuilder : NSObject <DTHTMLParserDelegate>
{
    NSData *_data;
    NSDictionary *_options;
    _Bool _shouldKeepDocumentNodeTree;
    double _textScale;
    UIColor *_defaultLinkColor;
    DTCSSStylesheet *_globalStyleSheet;
    NSURL *_baseURL;
    DTCoreTextFontDescriptor *_defaultFontDescriptor;
    DTCoreTextParagraphStyle *_defaultParagraphStyle;
    DTHTMLElement *_defaultTag;
    NSMutableAttributedString *_tmpString;
    NSObject<OS_dispatch_queue> *_stringAssemblyQueue;
    NSObject<OS_dispatch_group> *_stringAssemblyGroup;
    NSObject<OS_dispatch_queue> *_dataParsingQueue;
    NSObject<OS_dispatch_group> *_dataParsingGroup;
    NSObject<OS_dispatch_queue> *_treeBuildingQueue;
    NSObject<OS_dispatch_group> *_treeBuildingGroup;
    NSMutableDictionary *_tagStartHandlers;
    NSMutableDictionary *_tagEndHandlers;
    CDUnknownBlockType _willFlushCallback;
    _Bool _shouldProcessCustomHTMLAttributes;
    DTHTMLElement *_rootNode;
    DTHTMLElement *_bodyElement;
    DTHTMLElement *_currentTag;
    _Bool _ignoreParseEvents;
    _Bool _ignoreInlineStyles;
}

@property(nonatomic) _Bool shouldKeepDocumentNodeTree; // @synthesize shouldKeepDocumentNodeTree=_shouldKeepDocumentNodeTree;
@property(copy, nonatomic) CDUnknownBlockType willFlushCallback; // @synthesize willFlushCallback=_willFlushCallback;
- (void).cxx_destruct;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)_registerTagEndHandlers;
- (void)_registerTagStartHandlers;
- (id)generatedAttributedString;
- (_Bool)_buildString;
- (void)dealloc;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

