//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface MMDocument : NSObject
{
    NSMutableArray *_elements;
    NSString *_markdown;
}

+ (id)documentWithMarkdown:(id)arg1;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, copy, nonatomic) NSString *markdown; // @synthesize markdown=_markdown;
- (void).cxx_destruct;
- (void)addElement:(id)arg1;
- (id)initWithMarkdown:(id)arg1;

@end
