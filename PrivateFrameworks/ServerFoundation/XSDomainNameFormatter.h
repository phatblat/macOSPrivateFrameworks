//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ServerFoundation/XSCharacterSetFormatter.h>

@interface XSDomainNameFormatter : XSCharacterSetFormatter
{
    BOOL _allowMultiValue;
    BOOL _allowsPortSuffix;
}

+ (id)formatter;
@property BOOL allowsPortSuffix; // @synthesize allowsPortSuffix=_allowsPortSuffix;
@property BOOL allowsMultipleValues; // @synthesize allowsMultipleValues=_allowMultiValue;
- (BOOL)isValidDomainName:(id)arg1;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
