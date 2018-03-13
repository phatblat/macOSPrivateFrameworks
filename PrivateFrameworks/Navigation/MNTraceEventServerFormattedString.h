//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOServerFormattedString.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MNTraceEventServerFormattedString : NSObject <GEOServerFormattedString>
{
    NSArray *_formatStrings;
    NSArray *_formatTokens;
    NSArray *_separators;
}

@property(readonly, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(readonly, nonatomic) NSArray *formatTokens; // @synthesize formatTokens=_formatTokens;
@property(readonly, nonatomic) NSArray *formatStrings; // @synthesize formatStrings=_formatStrings;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatStrings:(id)arg1 formatTokens:(id)arg2 separators:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

