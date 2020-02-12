//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSTokenizer, NSData;

@interface ICSParser : NSObject
{
    unsigned long long _options;
    ICSTokenizer *_lexer;
    NSData *_data;
}

+ (id)entitiesFromNSData:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) ICSTokenizer *lexer; // @synthesize lexer=_lexer;
- (void).cxx_destruct;
- (id)parseData;
- (void)parseComponent:(id)arg1;
- (BOOL)parseProperty:(id)arg1;
- (BOOL)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;
- (void)parseParameter:(id)arg1;
- (id)makeComponent:(char *)arg1;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;

@end

