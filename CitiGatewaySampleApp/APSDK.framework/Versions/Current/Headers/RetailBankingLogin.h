//
//  RetailBankingLogin.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingLogin
 @abstract RetailBankingLogin class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingLogin
 @abstract Generated model object: RetailBankingLogin.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingLogin(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingLogin/token @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingLogin : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingLogin.
 @result Class representing the data source associated with a RetailBankingLogin.
 */
+ (Class)dataSource;

/*!
 @var token
 @abstract Generated model property: token.
 @discussion Primary key.
 */
@property (nonatomic, strong) NSString * token;

/*!
 @var isEligibleForOffers
 @abstract Generated model property: is_eligible_for_offers.
 */
@property (nonatomic, strong) NSString * isEligibleForOffers;

/*!
 @var isPersonToPersonRequired
 @abstract Generated model property: is_person_to_person_required.
 */
@property (nonatomic, strong) NSString * isPersonToPersonRequired;

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
