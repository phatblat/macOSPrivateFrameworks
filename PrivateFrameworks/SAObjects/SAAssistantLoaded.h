//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAAssistantLoaded : SABaseClientBoundCommand
{
}

+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantLoaded;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *version;
@property(copy, nonatomic) NSArray *syncAnchors;
@property(copy, nonatomic) NSNumber *requestSync;
@property(copy, nonatomic) NSString *dataAnchor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

