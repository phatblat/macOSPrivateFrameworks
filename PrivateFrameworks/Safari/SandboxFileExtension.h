//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SandboxExtension.h>

__attribute__((visibility("hidden")))
@interface SandboxFileExtension : SandboxExtension
{
    long long _permissions;
}

@property(readonly, nonatomic) long long permissions; // @synthesize permissions=_permissions;
- (void)releaseResource;
- (BOOL)consumeResource;
- (id)initWithURL:(id)arg1 permissions:(long long)arg2;

@end

