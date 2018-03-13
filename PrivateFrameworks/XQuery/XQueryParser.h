//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, XQueryParsedModule;

__attribute__((visibility("hidden")))
@interface XQueryParser : NSObject
{
    NSMutableArray *_errors;
    NSString *_source;
    NSArray *_sourceLines;
    const char *_utf8String;
    long long _length;
    unsigned long long _position;
    XQueryParsedModule *_parsedModule;
}

+ (id)parserWithSource:(id)arg1;
+ (void)initialize;
+ (id)currentParser;
- (id)parsedModule;
- (id)sourceLine:(long long)arg1;
- (id)errors;
- (id)source;
- (id)initWithSource:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (long long)readChars:(unsigned long long)arg1 toBuffer:(char *)arg2;
- (void)parse;
- (void)setError:(id)arg1;

@end

