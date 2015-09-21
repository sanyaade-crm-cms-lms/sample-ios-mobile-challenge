//
//  CorporatePaymentsLogin.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsLogin
 @abstract CorporatePaymentsLogin class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CorporatePaymentsLogin
 @abstract Generated model object: CorporatePaymentsLogin.
 @discussion Use @link //apple_ref/occ/cat/CorporatePaymentsLogin(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CorporatePaymentsLogin/token @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CorporatePaymentsLogin : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CorporatePaymentsLogin.
 @result Class representing the data source associated with a CorporatePaymentsLogin.
 */
+ (Class)dataSource;

/*!
 @var token
 @abstract Generated model property: token.
 @discussion Primary key.
 */
@property (nonatomic, strong) NSString * token;

/*!
 @var password
 @abstract Generated model property: password.
 */
@property (nonatomic, strong) NSString * password;

/*!
 @var username
 @abstract Generated model property: username.
 */
@property (nonatomic, strong) NSString * username;

@end
