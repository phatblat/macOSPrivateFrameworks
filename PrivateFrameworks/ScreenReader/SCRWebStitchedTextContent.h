//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SCRWebStitchedTextContent : NSObject
{
    NSMutableArray *_lines;
}

@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
- (void).cxx_destruct;
- (void)addAttributedString:(id)arg1 atRect:(struct CGRect)arg2;
- (void)addString:(id)arg1 atRect:(struct CGRect)arg2;
- (void)clearAll;
- (id)description;
- (id)attributedValueDescription;
- (id)valueDescription;
- (id)_buildAttributedDescriptionWithLineDelim:(id)arg1 phraseDelim:(id)arg2 tokenDelim:(id)arg3 includeLineNumbers:(BOOL)arg4;
- (id)lastLine;
- (void)addLine;
- (id)init;

@end
