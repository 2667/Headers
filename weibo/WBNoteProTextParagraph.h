//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNoteProParagraph.h"

#import "UITextViewDelegate-Protocol.h"
#import "WBNoteProTextParagraphCellDelegate-Protocol.h"

@class NSAttributedString, NSMutableDictionary, NSString, UIColor, UIFont;
@protocol WBNoteProTextParagraphDelegate><WBNoteProTextParagraphCellDelegate;

@interface WBNoteProTextParagraph : WBNoteProParagraph <WBNoteProTextParagraphCellDelegate, UITextViewDelegate>
{
    _Bool _heightNeedsCaculate;
    NSAttributedString *_attributedText;
    double _height;
}

+ (_Bool)highlightEnable;
@property(nonatomic) _Bool heightNeedsCaculate; // @synthesize heightNeedsCaculate=_heightNeedsCaculate;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textParagraphCellDidBeginEditing:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)nextTextParagraphDidBackspaceAtHeader:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *typingAttributes;
- (_Bool)isEmpty;
- (double)heightOfCellWithWidth:(double)arg1;
- (void)setupProParagraphCell:(id)arg1;
- (Class)paragraphCellClass;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)init;
- (id)initWithAttributedText:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)_reset:(id)arg1;
- (id)_rStrip:(id)arg1;
- (void)_resetAttributes:(id)arg1;
- (void)_updateAttributedPlaceholder:(id)arg1;
- (id)_placeholderForContent;
- (id)_placeholderAttributes;
- (id)insertedTextParagraphWhenReturnAtEnding;
- (id)insertedTextParagraphWhenReturnAtHeader;
- (struct UIEdgeInsets)edgeInset;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIFont *boldTextFont;
@property(readonly, nonatomic) UIFont *textFont;
- (id)getAttributedStringFromHtmlString:(id)arg1;
- (id)getHtmlStringFromAttributedText:(id)arg1;
- (id)formatHtml:(id)arg1;
- (id)formatLinkHtml:(id)arg1;
- (id)removeTagsInLinkText:(id)arg1;
- (id)StripTag:(id)arg1 inString:(id)arg2;
- (id)getBodyHtml:(id)arg1;
- (id)stringRenderedWithCss:(id)arg1 content:(id)arg2 styles:(id)arg3;
- (id)parseStyles:(id)arg1;
- (id)parseOneStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WBNoteProTextParagraphDelegate><WBNoteProTextParagraphCellDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

