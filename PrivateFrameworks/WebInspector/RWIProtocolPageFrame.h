//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *mimeType;
@property(copy, nonatomic) NSString *securityOrigin;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *loaderId;
@property(copy, nonatomic) NSString *parentId;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5;

@end

