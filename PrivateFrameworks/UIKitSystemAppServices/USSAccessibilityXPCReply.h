//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "USSXPCEncodable.h"

@class AXPTranslatorResponse;

@interface USSAccessibilityXPCReply : NSObject <NSCopying, USSXPCEncodable>
{
    AXPTranslatorResponse *_translatorResponse;
}

@property(retain, nonatomic) AXPTranslatorResponse *translatorResponse; // @synthesize translatorResponse=_translatorResponse;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTranslatorResponse:(id)arg1;

@end

