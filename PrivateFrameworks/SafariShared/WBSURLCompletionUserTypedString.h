//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding>
{
    NSString *_string;
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_string;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

@end

