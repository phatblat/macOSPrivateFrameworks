//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject
{
    NSTextContentManager *_textContentManager;
    NSTextRange *_elementRange;
}

@property(retain) NSTextRange *elementRange; // @synthesize elementRange=_elementRange;
@property __weak NSTextContentManager *textContentManager; // @dynamic textContentManager;
- (void)dealloc;
- (id)init;
- (id)initWithTextContentManager:(id)arg1;

@end
