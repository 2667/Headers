//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@protocol WBNoteProParagraphDelegate;

@interface WBNoteProParagraph : WBModelObject
{
    id <WBNoteProParagraphDelegate> _delegate;
}

+ (long long)paragraphType;
+ (Class)noteProParagrapClassWithParagraphType:(long long)arg1;
+ (void)registerNoteProParagrapClass;
+ (id)noteProParagraphClassMap;
@property(nonatomic) __weak id <WBNoteProParagraphDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupProParagraphCell:(id)arg1;
- (id)dictionaryRepresentation;
- (id)htmlString;
@property(readonly, nonatomic) _Bool isEmpty;
- (double)heightOfCellWithWidth:(double)arg1;
- (Class)paragraphCellClass;

@end

