//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface ABCPreferences : NSObject
{
    BOOL _diagnosticsAndUsageEnabled;
    BOOL _autoFeedbackAssistantEnable;
    BOOL _disable_internal_build;
    BOOL _optin_autobugcapture;
    BOOL _disable_autobugcapture;
    BOOL _dut_flag;
    BOOL _is_automated_device_group;
    BOOL _ignore_automated_device_group;
    BOOL _apns_enable;
    BOOL _apns_dev_environment;
    BOOL _arbitrator_disable_dampening;
    BOOL _disable_api_rate_limit;
    BOOL _cloudkit_enable;
    BOOL _ABCUserConsent;
    BOOL _abcUIUserConsent;
    BOOL _cloudkit_sandbox_environment;
    BOOL _cloudkit_prefers_anonymous;
    NSNumber *_carrier_seed_flag;
    NSNumber *_seed_flag;
    NSString *_database_container_path;
    long long _arbitrator_daily_count_limit;
    unsigned long long _max_upload_retries;
    unsigned long long _arbitrator_dampened_ips_limit;
    unsigned long long _dampening_restriction_factor;
    double _api_rate_limit;
    double _api_limit_window;
    unsigned long long _cloudkit_upload_expiration_timeout;
    unsigned long long _cloudkit_upload_connection_timeout;
    unsigned long long _cloudkit_upload_max_fallback_log_count;
    NSString *_cloudkit_container_identifier;
    char *_enable_cloudkit;
    NSUserDefaults *_automatedDeviceGroupDefaults;
}

@property(retain, nonatomic) NSUserDefaults *automatedDeviceGroupDefaults; // @synthesize automatedDeviceGroupDefaults=_automatedDeviceGroupDefaults;
@property(nonatomic) char *enable_cloudkit; // @synthesize enable_cloudkit=_enable_cloudkit;
@property(nonatomic) BOOL cloudkit_prefers_anonymous; // @synthesize cloudkit_prefers_anonymous=_cloudkit_prefers_anonymous;
@property(nonatomic) NSString *cloudkit_container_identifier; // @synthesize cloudkit_container_identifier=_cloudkit_container_identifier;
@property(nonatomic) unsigned long long cloudkit_upload_max_fallback_log_count; // @synthesize cloudkit_upload_max_fallback_log_count=_cloudkit_upload_max_fallback_log_count;
@property(nonatomic) unsigned long long cloudkit_upload_connection_timeout; // @synthesize cloudkit_upload_connection_timeout=_cloudkit_upload_connection_timeout;
@property(nonatomic) unsigned long long cloudkit_upload_expiration_timeout; // @synthesize cloudkit_upload_expiration_timeout=_cloudkit_upload_expiration_timeout;
@property(nonatomic) BOOL cloudkit_sandbox_environment; // @synthesize cloudkit_sandbox_environment=_cloudkit_sandbox_environment;
@property(nonatomic) double api_limit_window; // @synthesize api_limit_window=_api_limit_window;
@property(nonatomic) double api_rate_limit; // @synthesize api_rate_limit=_api_rate_limit;
@property(nonatomic) unsigned long long dampening_restriction_factor; // @synthesize dampening_restriction_factor=_dampening_restriction_factor;
@property(nonatomic) unsigned long long arbitrator_dampened_ips_limit; // @synthesize arbitrator_dampened_ips_limit=_arbitrator_dampened_ips_limit;
@property(nonatomic) unsigned long long max_upload_retries; // @synthesize max_upload_retries=_max_upload_retries;
@property(nonatomic) long long arbitrator_daily_count_limit; // @synthesize arbitrator_daily_count_limit=_arbitrator_daily_count_limit;
@property(nonatomic) BOOL abcUIUserConsent; // @synthesize abcUIUserConsent=_abcUIUserConsent;
@property(nonatomic) BOOL ABCUserConsent; // @synthesize ABCUserConsent=_ABCUserConsent;
@property(nonatomic) BOOL cloudkit_enable; // @synthesize cloudkit_enable=_cloudkit_enable;
@property(nonatomic) BOOL disable_api_rate_limit; // @synthesize disable_api_rate_limit=_disable_api_rate_limit;
@property(nonatomic) BOOL arbitrator_disable_dampening; // @synthesize arbitrator_disable_dampening=_arbitrator_disable_dampening;
@property(nonatomic) BOOL apns_dev_environment; // @synthesize apns_dev_environment=_apns_dev_environment;
@property(nonatomic) BOOL apns_enable; // @synthesize apns_enable=_apns_enable;
@property(nonatomic) BOOL ignore_automated_device_group; // @synthesize ignore_automated_device_group=_ignore_automated_device_group;
@property(nonatomic) BOOL is_automated_device_group; // @synthesize is_automated_device_group=_is_automated_device_group;
@property(nonatomic) BOOL dut_flag; // @synthesize dut_flag=_dut_flag;
@property(nonatomic) BOOL disable_autobugcapture; // @synthesize disable_autobugcapture=_disable_autobugcapture;
@property(nonatomic) BOOL optin_autobugcapture; // @synthesize optin_autobugcapture=_optin_autobugcapture;
@property(retain, nonatomic) NSString *database_container_path; // @synthesize database_container_path=_database_container_path;
@property(retain, nonatomic) NSNumber *seed_flag; // @synthesize seed_flag=_seed_flag;
@property(retain, nonatomic) NSNumber *carrier_seed_flag; // @synthesize carrier_seed_flag=_carrier_seed_flag;
@property(nonatomic) BOOL disable_internal_build; // @synthesize disable_internal_build=_disable_internal_build;
@property(nonatomic) BOOL autoFeedbackAssistantEnable; // @synthesize autoFeedbackAssistantEnable=_autoFeedbackAssistantEnable;
@property(nonatomic) BOOL diagnosticsAndUsageEnabled; // @synthesize diagnosticsAndUsageEnabled=_diagnosticsAndUsageEnabled;
- (void).cxx_destruct;
- (void)setABCUIUserConsent:(BOOL)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end
