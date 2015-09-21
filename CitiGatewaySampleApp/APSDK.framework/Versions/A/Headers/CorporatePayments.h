//
//  CorporatePayments.h
//  AnyPresence SDK
//

/*!
 @header CorporatePayments
 @abstract CorporatePayments class
 */

#import "APService.h"

/*!
 @class CorporatePayments
 @abstract Contains configuration for the CorporatePayments data source.
 */

@interface CorporatePayments : APService

/*!
 @method setBaseURL:
 @abstract Sets base URL for the CorporatePayments data source.
 @param url Base URL for CorporatePayments.
 */
+ (void)setBaseURL:(NSURL *)url;

/*!
 @method setHTTPBasicAuthUsername:password:
 @abstract Sets HTTP Basic Auth info for the CorporatePayments data source.
 @param username Username for CorporatePayments.
 @param password Password for the username provided.
 */
+ (void)setHTTPBasicAuthUsername:(NSString *)username password:(NSString *)password;

/*!
 @method setSSLCertificate:
 @abstract Sets path to certificate associated with the CorporatePayments data source.
 @param path Path to SSL certificate. (e.g. [[NSBundle mainBundle] pathForResource:@"MyCertificateName" ofType:@"cer"]).  This value must not be nil.
 @discussion Providing nil for a path is strictly prohibited.  Also please note that SSL pinning is incompatible with synchronous networking requests, so client code MUST use the asynchronous APIs.
 */
+ (void)setSSLCertificate:(NSString *)path;

/*!
 @method certificate
 @abstract Returns the certificate associated with CorporatePayments.
 @result Binary representation of the certificate associate with CorporatePayments.
 */
+ (NSData *)certificate;

/*!
 @method serializationFormat
 @abstract Returns the serialization format associated with CorporatePayments.
 @result APSerializationFormat associated with CorporatePayments.
 */
+ (enum APSerializationFormat)serializationFormat;

@end
