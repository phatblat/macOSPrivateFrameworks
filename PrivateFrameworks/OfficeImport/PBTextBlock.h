//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PBTextBlock : NSObject
{
}

+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;
+ (void)applyTextRuler:(struct PptTextRulerAtom *)arg1 toTextBlock:(id)arg2;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString *)arg2 textType:(int)arg3 state:(id)arg4;
+ (void)readFromStyledText:(struct __CFAttributedString *)arg1 toStyledPargraphs:(struct __CFArray *)arg2;
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString *)arg2;

@end

