//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USSXPCEncodable.h"

@class NSString;

@interface USSSceneActiveRequest : NSObject <USSXPCEncodable>
{
    BOOL _isForegroundApp;
    BOOL _isActiveApp;
    NSString *_identifier;
}

+ (id)sceneActiveRequestForScene:(id)arg1 isForegroundApp:(BOOL)arg2 isActiveApp:(BOOL)arg3;
@property(nonatomic) BOOL isActiveApp; // @synthesize isActiveApp=_isActiveApp;
@property(nonatomic) BOOL isForegroundApp; // @synthesize isForegroundApp=_isForegroundApp;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initCommon;

@end

